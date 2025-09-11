
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditTagsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditTagsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ResourceTagInfoBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditTagsResponse();
    virtual ~ListAuditTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditTagsResponse members

    /// <summary>
    /// 自定义标签
    /// </summary>

    std::vector<ResourceTagInfoBean>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTagInfoBean>& value);

    /// <summary>
    /// 系统标签
    /// </summary>

    std::vector<ResourceTagInfoBean>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<ResourceTagInfoBean>& value);


protected:
    std::vector<ResourceTagInfoBean> tags_;
    bool tagsIsSet_;
    std::vector<ResourceTagInfoBean> sysTags_;
    bool sysTagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditTagsResponse_H_
