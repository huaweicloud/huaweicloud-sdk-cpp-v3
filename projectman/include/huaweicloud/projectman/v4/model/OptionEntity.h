
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OptionEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OptionEntity_H_


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
/// 字段选项
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  OptionEntity
    : public ModelBase
{
public:
    OptionEntity();
    virtual ~OptionEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OptionEntity members

    /// <summary>
    /// 选项id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 选项code值
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 选项显示名称
    /// </summary>

    std::string getDisplayValue() const;
    bool displayValueIsSet() const;
    void unsetdisplayValue();
    void setDisplayValue(const std::string& value);

    /// <summary>
    /// 选项唯一标识
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 选项层级。用于区分层级字段的层级
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// 选项顺序
    /// </summary>

    int32_t getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(int32_t value);

    /// <summary>
    /// 父选项id
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string displayValue_;
    bool displayValueIsSet_;
    std::string value_;
    bool valueIsSet_;
    int32_t level_;
    bool levelIsSet_;
    int32_t sequence_;
    bool sequenceIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_OptionEntity_H_
