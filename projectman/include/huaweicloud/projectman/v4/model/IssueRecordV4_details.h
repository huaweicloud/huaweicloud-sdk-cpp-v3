
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_details_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_details_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueRecordV4_details
    : public ModelBase
{
public:
    IssueRecordV4_details();
    virtual ~IssueRecordV4_details();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueRecordV4_details members

    /// <summary>
    /// 操作属性
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);

    /// <summary>
    /// 上次的记录
    /// </summary>

    std::string getOldValue() const;
    bool oldValueIsSet() const;
    void unsetoldValue();
    void setOldValue(const std::string& value);

    /// <summary>
    /// 当前值
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// 操作
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// 操作记录的id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 操作的字段
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string property_;
    bool propertyIsSet_;
    std::string oldValue_;
    bool oldValueIsSet_;
    std::string newValue_;
    bool newValueIsSet_;
    std::string operation_;
    bool operationIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueRecordV4_details_H_
