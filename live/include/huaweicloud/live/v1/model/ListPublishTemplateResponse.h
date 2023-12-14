
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListPublishTemplateResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListPublishTemplateResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListPublishTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPublishTemplateResponse();
    virtual ~ListPublishTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPublishTemplateResponse members

    /// <summary>
    /// 回调地址
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 鉴权密钥
    /// </summary>

    std::string getAuthSignKey() const;
    bool authSignKeyIsSet() const;
    void unsetauthSignKey();
    void setAuthSignKey(const std::string& value);

    /// <summary>
    /// 接收回调通知服务器所在区域。 包含如下取值： - mainland_china：中国大陆区域。 - outside_mainland_china：中国大陆以外区域。
    /// </summary>

    std::string getCallBackArea() const;
    bool callBackAreaIsSet() const;
    void unsetcallBackArea();
    void setCallBackArea(const std::string& value);


protected:
    std::string url_;
    bool urlIsSet_;
    std::string authSignKey_;
    bool authSignKeyIsSet_;
    std::string callBackArea_;
    bool callBackAreaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListPublishTemplateResponse_H_
