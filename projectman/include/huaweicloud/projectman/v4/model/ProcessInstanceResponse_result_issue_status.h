
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_issue_status_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_issue_status_H_


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
/// 工作项状态
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProcessInstanceResponse_result_issue_status
    : public ModelBase
{
public:
    ProcessInstanceResponse_result_issue_status();
    virtual ~ProcessInstanceResponse_result_issue_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessInstanceResponse_result_issue_status members

    /// <summary>
    /// 状态id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项的状态属性。 **取值范围**： START、IN_PROGRESS、END。
    /// </summary>

    std::string getBelonging() const;
    bool belongingIsSet() const;
    void unsetbelonging();
    void setBelonging(const std::string& value);

    /// <summary>
    /// 空间id
    /// </summary>

    std::string getSpaceId() const;
    bool spaceIdIsSet() const;
    void unsetspaceId();
    void setSpaceId(const std::string& value);

    /// <summary>
    /// 状态名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 定义类型
    /// </summary>

    std::string getDefinitionType() const;
    bool definitionTypeIsSet() const;
    void unsetdefinitionType();
    void setDefinitionType(const std::string& value);

    /// <summary>
    /// 所属字段定义类型
    /// </summary>

    int32_t getBelongDefinitionType() const;
    bool belongDefinitionTypeIsSet() const;
    void unsetbelongDefinitionType();
    void setBelongDefinitionType(int32_t value);

    /// <summary>
    /// 显示值
    /// </summary>

    std::string getDisplayValue() const;
    bool displayValueIsSet() const;
    void unsetdisplayValue();
    void setDisplayValue(const std::string& value);

    /// <summary>
    /// 排序位置
    /// </summary>

    int32_t getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(int32_t value);

    /// <summary>
    /// 可显示
    /// </summary>

    int32_t getDisplayable() const;
    bool displayableIsSet() const;
    void unsetdisplayable();
    void setDisplayable(int32_t value);

    /// <summary>
    /// 可编辑
    /// </summary>

    int32_t getEditable() const;
    bool editableIsSet() const;
    void unseteditable();
    void setEditable(int32_t value);

    /// <summary>
    /// 可删除
    /// </summary>

    int32_t getDeletable() const;
    bool deletableIsSet() const;
    void unsetdeletable();
    void setDeletable(int32_t value);

    /// <summary>
    /// 可变的
    /// </summary>

    int32_t getMutable() const;
    bool mutableIsSet() const;
    void unsetmutable();
    void setMutable(int32_t value);

    /// <summary>
    /// 状态拼音
    /// </summary>

    std::string getTitlePy() const;
    bool titlePyIsSet() const;
    void unsettitlePy();
    void setTitlePy(const std::string& value);

    /// <summary>
    /// 状态创建人
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 状态创建时间
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 状态最后修改时间
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 状态最后修改人
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// 是否链接节点字段
    /// </summary>

    bool isLinkageNodeFields() const;
    bool linkageNodeFieldsIsSet() const;
    void unsetlinkageNodeFields();
    void setLinkageNodeFields(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string belonging_;
    bool belongingIsSet_;
    std::string spaceId_;
    bool spaceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string definitionType_;
    bool definitionTypeIsSet_;
    int32_t belongDefinitionType_;
    bool belongDefinitionTypeIsSet_;
    std::string displayValue_;
    bool displayValueIsSet_;
    int32_t position_;
    bool positionIsSet_;
    int32_t displayable_;
    bool displayableIsSet_;
    int32_t editable_;
    bool editableIsSet_;
    int32_t deletable_;
    bool deletableIsSet_;
    int32_t mutable_;
    bool mutableIsSet_;
    std::string titlePy_;
    bool titlePyIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    bool linkageNodeFields_;
    bool linkageNodeFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_issue_status_H_
