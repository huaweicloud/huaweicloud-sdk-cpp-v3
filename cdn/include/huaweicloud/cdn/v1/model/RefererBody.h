
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_RefererBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_RefererBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/Referer.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  RefererBody
    : public ModelBase
{
public:
    RefererBody();
    virtual ~RefererBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RefererBody members

    /// <summary>
    /// 
    /// </summary>

    Referer getReferer() const;
    bool refererIsSet() const;
    void unsetreferer();
    void setReferer(const Referer& value);


protected:
    Referer referer_;
    bool refererIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_RefererBody_H_
