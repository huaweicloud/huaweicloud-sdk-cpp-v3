
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEipTagsResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEipTagsResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/SysTag.h>
#include <huaweicloud/geip/v3/model/CreateTag.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ShowGlobalEipTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGlobalEipTagsResponse();
    virtual ~ShowGlobalEipTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGlobalEipTagsResponse members

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 单个资源的租户标签列表。
    /// </summary>

    std::vector<CreateTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateTag>& value);

    /// <summary>
    /// 单个资源的系统标签列表。
    /// </summary>

    std::vector<SysTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<SysTag>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::vector<CreateTag> tags_;
    bool tagsIsSet_;
    std::vector<SysTag> sysTags_;
    bool sysTagsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ShowGlobalEipTagsResponse_H_
