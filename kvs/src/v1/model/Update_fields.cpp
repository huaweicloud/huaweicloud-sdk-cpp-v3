

#include "huaweicloud/kvs/v1/model/Update_fields.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




Update_fields::Update_fields()
{
    upsertIsSet_ = false;
    setIsSet_ = false;
    addIsSet_ = false;
    rmvIsSet_ = false;
    insertIsSet_ = false;
    deleteIsSet_ = false;
    updateBlobIsSet_ = false;
}

Update_fields::~Update_fields() = default;

void Update_fields::validate()
{
}

bool Update_fields::toBson(Builder &builder) const
{

    if (upsertIsSet_ && !bson_append(builder, "upsert", upsert_)) {
        return false;
    }
    if (setIsSet_ && !bson_append(builder, "set", set_)) {
        return false;
    }
    if (addIsSet_ && !bson_append(builder, "add", add_)) {
        return false;
    }
    if (rmvIsSet_ && !bson_append(builder, "rmv", rmv_)) {
        return false;
    }
    if (insertIsSet_ && !bson_append(builder, "insert", insert_)) {
        return false;
    }
    if (deleteIsSet_ && !bson_append(builder, "delete", delete_)) {
        return false;
    }
    if (updateBlobIsSet_ && !bson_append(builder, "update_blob", updateBlob_)) {
        return false;
    }

    return true;
}

bool Update_fields::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "upsert") {
            if (!bson_get(it, upsert_)) {
                return false;
            }
            upsertIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "set") {
            if (!bson_get(it, set_)) {
                return false;
            }
            setIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "add") {
            if (!bson_get(it, add_)) {
                return false;
            }
            addIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "rmv") {
            if (!bson_get(it, rmv_)) {
                return false;
            }
            rmvIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "insert") {
            if (!bson_get(it, insert_)) {
                return false;
            }
            insertIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "delete") {
            if (!bson_get(it, delete_)) {
                return false;
            }
            deleteIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "update_blob") {
            if (!bson_get(it, updateBlob_)) {
                return false;
            }
            updateBlobIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

Document Update_fields::getUpsert() const
{
    return upsert_;
}

void Update_fields::setUpsert(const Document& value)
{
    upsert_ = value;
    upsertIsSet_ = true;
}

bool Update_fields::upsertIsSet() const
{
    return upsertIsSet_;
}

void Update_fields::unsetupsert()
{
    upsertIsSet_ = false;
}

Document Update_fields::getSet() const
{
    return set_;
}

void Update_fields::setSet(const Document& value)
{
    set_ = value;
    setIsSet_ = true;
}

bool Update_fields::setIsSet() const
{
    return setIsSet_;
}

void Update_fields::unsetset()
{
    setIsSet_ = false;
}

Document Update_fields::getAdd() const
{
    return add_;
}

void Update_fields::setAdd(const Document& value)
{
    add_ = value;
    addIsSet_ = true;
}

bool Update_fields::addIsSet() const
{
    return addIsSet_;
}

void Update_fields::unsetadd()
{
    addIsSet_ = false;
}

std::vector<std::string>& Update_fields::getRmv()
{
    return rmv_;
}

void Update_fields::setRmv(const std::vector<std::string>& value)
{
    rmv_ = value;
    rmvIsSet_ = true;
}

bool Update_fields::rmvIsSet() const
{
    return rmvIsSet_;
}

void Update_fields::unsetrmv()
{
    rmvIsSet_ = false;
}

Document Update_fields::getInsert() const
{
    return insert_;
}

void Update_fields::setInsert(const Document& value)
{
    insert_ = value;
    insertIsSet_ = true;
}

bool Update_fields::insertIsSet() const
{
    return insertIsSet_;
}

void Update_fields::unsetinsert()
{
    insertIsSet_ = false;
}

Document Update_fields::getDelete() const
{
    return delete_;
}

void Update_fields::setDelete(const Document& value)
{
    delete_ = value;
    deleteIsSet_ = true;
}

bool Update_fields::deleteIsSet() const
{
    return deleteIsSet_;
}

void Update_fields::unsetdelete()
{
    deleteIsSet_ = false;
}

Update_blob Update_fields::getUpdateBlob() const
{
    return updateBlob_;
}

void Update_fields::setUpdateBlob(const Update_blob& value)
{
    updateBlob_ = value;
    updateBlobIsSet_ = true;
}

bool Update_fields::updateBlobIsSet() const
{
    return updateBlobIsSet_;
}

void Update_fields::unsetupdateBlob()
{
    updateBlobIsSet_ = false;
}

}
}
}
}
}


