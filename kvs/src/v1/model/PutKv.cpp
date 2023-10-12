

#include "huaweicloud/kvs/v1/model/PutKv.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




PutKv::PutKv()
{
    operId_ = 0;
    operIdIsSet_ = false;
    kvDocIsSet_ = false;
    kvBlobIsSet_ = false;
}

PutKv::~PutKv() = default;

void PutKv::validate()
{
}

bool PutKv::toBson(Builder &builder) const
{

    if (operIdIsSet_ && !bson_append(builder, "OperId", operId_)) {
        return false;
    }
    if (kvDocIsSet_ && !bson_append(builder, "KvDoc", kvDoc_)) {
        return false;
    }
    if (kvBlobIsSet_ && !bson_append(builder, "KvBlob", kvBlob_)) {
        return false;
    }

    return true;
}

bool PutKv::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "OperId") {
            if (!bson_get(it, operId_)) {
                return false;
            }
            operIdIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "KvDoc") {
            if (!bson_get(it, kvDoc_)) {
                return false;
            }
            kvDocIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "KvBlob") {
            if (!bson_get(it, kvBlob_)) {
                return false;
            }
            kvBlobIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int32_t PutKv::getOperId() const
{
    return operId_;
}

void PutKv::setOperId(int32_t value)
{
    operId_ = value;
    operIdIsSet_ = true;
}

bool PutKv::operIdIsSet() const
{
    return operIdIsSet_;
}

void PutKv::unsetoperId()
{
    operIdIsSet_ = false;
}

Document PutKv::getKvDoc() const
{
    return kvDoc_;
}

void PutKv::setKvDoc(const Document& value)
{
    kvDoc_ = value;
    kvDocIsSet_ = true;
}

bool PutKv::kvDocIsSet() const
{
    return kvDocIsSet_;
}

void PutKv::unsetkvDoc()
{
    kvDocIsSet_ = false;
}

KvBlob PutKv::getKvBlob() const
{
    return kvBlob_;
}

void PutKv::setKvBlob(const KvBlob& value)
{
    kvBlob_ = value;
    kvBlobIsSet_ = true;
}

bool PutKv::kvBlobIsSet() const
{
    return kvBlobIsSet_;
}

void PutKv::unsetkvBlob()
{
    kvBlobIsSet_ = false;
}

}
}
}
}
}


