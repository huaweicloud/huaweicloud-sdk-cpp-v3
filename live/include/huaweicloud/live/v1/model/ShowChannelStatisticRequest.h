
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowChannelStatisticRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowChannelStatisticRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/ShowChannelStatisticReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowChannelStatisticRequest
    : public ModelBase
{
public:
    ShowChannelStatisticRequest();
    virtual ~ShowChannelStatisticRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowChannelStatisticRequest members

    /// <summary>
    /// 服务鉴权Token，服务开启鉴权，必须携带Access-Control-Allow-Internal访问服务。
    /// </summary>

    std::string getAccessControlAllowInternal() const;
    bool accessControlAllowInternalIsSet() const;
    void unsetaccessControlAllowInternal();
    void setAccessControlAllowInternal(const std::string& value);

    /// <summary>
    /// 服务鉴权Token，服务开启鉴权，必须携带Access-Control-Allow-External访问服务。
    /// </summary>

    std::string getAccessControlAllowExternal() const;
    bool accessControlAllowExternalIsSet() const;
    void unsetaccessControlAllowExternal();
    void setAccessControlAllowExternal(const std::string& value);

    /// <summary>
    /// 每页记录数，取值范围[1,100]，默认值10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量。表示从此偏移量开始查询，offset大于等于0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ShowChannelStatisticReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ShowChannelStatisticReq& value);


protected:
    std::string accessControlAllowInternal_;
    bool accessControlAllowInternalIsSet_;
    std::string accessControlAllowExternal_;
    bool accessControlAllowExternalIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    ShowChannelStatisticReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowChannelStatisticRequest& dereference_from_shared_ptr(std::shared_ptr<ShowChannelStatisticRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowChannelStatisticRequest_H_
