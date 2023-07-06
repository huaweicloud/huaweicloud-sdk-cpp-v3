
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_Follow302StatusRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_Follow302StatusRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  Follow302StatusRequest
    : public ModelBase
{
public:
    Follow302StatusRequest();
    virtual ~Follow302StatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Follow302StatusRequest members

    /// <summary>
    /// follow302状态，off：关闭，on：开启。
    /// </summary>

    std::string getFollow302Status() const;
    bool follow302StatusIsSet() const;
    void unsetfollow302Status();
    void setFollow302Status(const std::string& value);


protected:
    std::string follow302Status_;
    bool follow302StatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_Follow302StatusRequest_H_
