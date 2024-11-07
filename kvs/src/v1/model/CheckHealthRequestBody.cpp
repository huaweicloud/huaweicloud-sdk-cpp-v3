

#include "huaweicloud/kvs/v1/model/CheckHealthRequestBody.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




CheckHealthRequestBody::CheckHealthRequestBody()
{
    version_ = 0;
    versionIsSet_ = false;
}

CheckHealthRequestBody::~CheckHealthRequestBody() = default;

void CheckHealthRequestBody::validate()
{
}

bool CheckHealthRequestBody::toBson(Builder &builder) const
{

    if (versionIsSet_ && !bson_append(builder, "version", version_)) {
        return false;
    }

    return true;
}

bool CheckHealthRequestBody::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "version") {
            if (!bson_get(it, version_)) {
                return false;
            }
            versionIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

int32_t CheckHealthRequestBody::getVersion() const
{
    return version_;
}

void CheckHealthRequestBody::setVersion(int32_t value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CheckHealthRequestBody::versionIsSet() const
{
    return versionIsSet_;
}

void CheckHealthRequestBody::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


