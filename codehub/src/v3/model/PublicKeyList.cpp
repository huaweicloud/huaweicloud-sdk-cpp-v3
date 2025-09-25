

#include "huaweicloud/codehub/v3/model/PublicKeyList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




PublicKeyList::PublicKeyList()
{
    sshkeyIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

PublicKeyList::~PublicKeyList() = default;

void PublicKeyList::validate()
{
}

web::json::value PublicKeyList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sshkeyIsSet_) {
        val[utility::conversions::to_string_t("sshkey")] = ModelBase::toJson(sshkey_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool PublicKeyList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sshkey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sshkey"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicKey> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSshkey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<PublicKey>& PublicKeyList::getSshkey()
{
    return sshkey_;
}

void PublicKeyList::setSshkey(const std::vector<PublicKey>& value)
{
    sshkey_ = value;
    sshkeyIsSet_ = true;
}

bool PublicKeyList::sshkeyIsSet() const
{
    return sshkeyIsSet_;
}

void PublicKeyList::unsetsshkey()
{
    sshkeyIsSet_ = false;
}

int32_t PublicKeyList::getTotal() const
{
    return total_;
}

void PublicKeyList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool PublicKeyList::totalIsSet() const
{
    return totalIsSet_;
}

void PublicKeyList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


