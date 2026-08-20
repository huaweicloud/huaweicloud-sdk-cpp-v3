
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项状态对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  StatusEntity
    : public ModelBase
{
public:
    StatusEntity();
    virtual ~StatusEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatusEntity members

    /// <summary>
    /// 状态ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 工作项的状态属性。
    /// </summary>

    std::string getBelonging() const;
    bool belongingIsSet() const;
    void unsetbelonging();
    void setBelonging(const std::string& value);

    /// <summary>
    /// 状态名。
    /// </summary>

    std::string getDisplayValue() const;
    bool displayValueIsSet() const;
    void unsetdisplayValue();
    void setDisplayValue(const std::string& value);

    /// <summary>
    /// 状态唯一标识。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 状态创建人。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 状态创建时间。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 状态修改人。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// 状态最近修改时间。
    /// </summary>

    std::string getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetmodifiedTime();
    void setModifiedTime(const std::string& value);

    /// <summary>
    /// 状态被哪些工作项使用。
    /// </summary>

    std::vector<std::string>& getCategoryCode();
    bool categoryCodeIsSet() const;
    void unsetcategoryCode();
    void setCategoryCode(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string belonging_;
    bool belongingIsSet_;
    std::string displayValue_;
    bool displayValueIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string modifiedTime_;
    bool modifiedTimeIsSet_;
    std::vector<std::string> categoryCode_;
    bool categoryCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_StatusEntity_H_
