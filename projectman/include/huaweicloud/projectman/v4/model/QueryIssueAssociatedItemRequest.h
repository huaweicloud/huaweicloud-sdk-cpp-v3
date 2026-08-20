
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_QueryIssueAssociatedItemRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_QueryIssueAssociatedItemRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  QueryIssueAssociatedItemRequest
    : public ModelBase
{
public:
    QueryIssueAssociatedItemRequest();
    virtual ~QueryIssueAssociatedItemRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryIssueAssociatedItemRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项唯一ID。可以通过查询工作项列表或者查询树状工作项接口获取，响应消息体中的id字段的值就是工作项ID。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 工作项类型。
    /// </summary>

    std::string getIssueType() const;
    bool issueTypeIsSet() const;
    void unsetissueType();
    void setIssueType(const std::string& value);

    /// <summary>
    /// 项目空间ID，可以通过查询IPD项目列表接口获取，响应消息体中的domain_id字段的值就是项目空间ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 目标项目的32位uuid，项目唯一标识，通过查询IPD项目列表获取，响应消息体中的project_id字段的值就是项目ID。
    /// </summary>

    std::string getTargetProjectId() const;
    bool targetProjectIdIsSet() const;
    void unsettargetProjectId();
    void setTargetProjectId(const std::string& value);

    /// <summary>
    /// 关联字段的字段编码。
    /// </summary>

    std::string getLinkFieldCode() const;
    bool linkFieldCodeIsSet() const;
    void unsetlinkFieldCode();
    void setLinkFieldCode(const std::string& value);

    /// <summary>
    /// 分页参数，当前页。
    /// </summary>

    std::string getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(const std::string& value);

    /// <summary>
    /// 分页参数，页长。
    /// </summary>

    std::string getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string issueType_;
    bool issueTypeIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string targetProjectId_;
    bool targetProjectIdIsSet_;
    std::string linkFieldCode_;
    bool linkFieldCodeIsSet_;
    std::string pageNo_;
    bool pageNoIsSet_;
    std::string pageSize_;
    bool pageSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    QueryIssueAssociatedItemRequest& dereference_from_shared_ptr(std::shared_ptr<QueryIssueAssociatedItemRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_QueryIssueAssociatedItemRequest_H_
