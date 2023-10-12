
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_SelfLinksInfo_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_SelfLinksInfo_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 连接信息
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  SelfLinksInfo
    : public ModelBase
{
public:
    SelfLinksInfo();
    virtual ~SelfLinksInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SelfLinksInfo members

    /// <summary>
    /// 连接地址
    /// </summary>

    std::string getSelf() const;
    bool selfIsSet() const;
    void unsetself();
    void setSelf(const std::string& value);


protected:
    std::string self_;
    bool selfIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_SelfLinksInfo_H_
