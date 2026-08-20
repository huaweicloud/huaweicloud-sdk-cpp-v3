
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAssociateVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAssociateVO_H_


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
/// 工作项关联请求数据对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueAssociateVO
    : public ModelBase
{
public:
    IssueAssociateVO();
    virtual ~IssueAssociateVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueAssociateVO members

    /// <summary>
    /// 关联的工作项ID，多个ID使用逗号分割。可以通过查询工作项列表或者查询树状工作项接口获取，响应消息体中的id字段的值就是工作项ID。 当link_field_code&#x3D;link时，最多支持关联500个工作项ID，其他场景最多支持50个工作项ID。
    /// </summary>

    std::string getAssociatedIds() const;
    bool associatedIdsIsSet() const;
    void unsetassociatedIds();
    void setAssociatedIds(const std::string& value);

    /// <summary>
    /// 操作类型标记位。
    /// </summary>

    int32_t getOperationFlag() const;
    bool operationFlagIsSet() const;
    void unsetoperationFlag();
    void setOperationFlag(int32_t value);

    /// <summary>
    /// 关联项类型编码。
    /// </summary>

    std::string getAssociateIssueType() const;
    bool associateIssueTypeIsSet() const;
    void unsetassociateIssueType();
    void setAssociateIssueType(const std::string& value);

    /// <summary>
    /// 当前工作项类型编码。
    /// </summary>

    std::string getSourceIssueType() const;
    bool sourceIssueTypeIsSet() const;
    void unsetsourceIssueType();
    void setSourceIssueType(const std::string& value);

    /// <summary>
    /// 是否使用替换模式。默认为false，追加关联项。如果为true，则会删除原有的关联项，替换为本次关联的工作项。
    /// </summary>

    bool isIsReplace() const;
    bool isReplaceIsSet() const;
    void unsetisReplace();
    void setIsReplace(bool value);

    /// <summary>
    /// 关联字段的字段编码。
    /// </summary>

    std::string getLinkFieldCode() const;
    bool linkFieldCodeIsSet() const;
    void unsetlinkFieldCode();
    void setLinkFieldCode(const std::string& value);


protected:
    std::string associatedIds_;
    bool associatedIdsIsSet_;
    int32_t operationFlag_;
    bool operationFlagIsSet_;
    std::string associateIssueType_;
    bool associateIssueTypeIsSet_;
    std::string sourceIssueType_;
    bool sourceIssueTypeIsSet_;
    bool isReplace_;
    bool isReplaceIsSet_;
    std::string linkFieldCode_;
    bool linkFieldCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueAssociateVO_H_
