

#include "huaweicloud/aad/v2/model/ListConnectionNumberData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListConnectionNumberData::ListConnectionNumberData()
{
    name_ = "";
    nameIsSet_ = false;
    listIsSet_ = false;
}

ListConnectionNumberData::~ListConnectionNumberData() = default;

void ListConnectionNumberData::validate()
{
}

web::json::value ListConnectionNumberData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }

    return val;
}
bool ListConnectionNumberData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListConnectionNumberDataList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    return ok;
}


std::string ListConnectionNumberData::getName() const
{
    return name_;
}

void ListConnectionNumberData::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListConnectionNumberData::nameIsSet() const
{
    return nameIsSet_;
}

void ListConnectionNumberData::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ListConnectionNumberDataList>& ListConnectionNumberData::getList()
{
    return list_;
}

void ListConnectionNumberData::setList(const std::vector<ListConnectionNumberDataList>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListConnectionNumberData::listIsSet() const
{
    return listIsSet_;
}

void ListConnectionNumberData::unsetlist()
{
    listIsSet_ = false;
}

}
}
}
}
}


