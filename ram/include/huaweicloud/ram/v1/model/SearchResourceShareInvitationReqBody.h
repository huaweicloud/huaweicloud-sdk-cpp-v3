
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareInvitationReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareInvitationReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchResourceShareInvitationReqBody
    : public ModelBase
{
public:
    SearchResourceShareInvitationReqBody();
    virtual ~SearchResourceShareInvitationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceShareInvitationReqBody members

    /// <summary>
    /// 资源共享实例的ID列表。
    /// </summary>

    std::vector<std::string>& getResourceShareIds();
    bool resourceShareIdsIsSet() const;
    void unsetresourceShareIds();
    void setResourceShareIds(const std::vector<std::string>& value);

    /// <summary>
    /// 资源共享邀请的ID列表。
    /// </summary>

    std::vector<std::string>& getResourceShareInvitationIds();
    bool resourceShareInvitationIdsIsSet() const;
    void unsetresourceShareInvitationIds();
    void setResourceShareInvitationIds(const std::vector<std::string>& value);

    /// <summary>
    /// 资源共享邀请的当前状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 分页页面的最大值。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页位置标识。从marker指定索引的下一条数据开始查询。查询第一页数据时，不需要传入此参数，查询后续页码数据时，将查询前一页数据响应体中marker值配入此参数。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::vector<std::string> resourceShareIds_;
    bool resourceShareIdsIsSet_;
    std::vector<std::string> resourceShareInvitationIds_;
    bool resourceShareInvitationIdsIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareInvitationReqBody_H_
