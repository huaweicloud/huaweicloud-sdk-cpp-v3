
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IterationHistory_details_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IterationHistory_details_H_


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
/// 操作详情
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IterationHistory_details
    : public ModelBase
{
public:
    IterationHistory_details();
    virtual ~IterationHistory_details();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IterationHistory_details members

    /// <summary>
    /// 变更的字段
    /// </summary>

    std::string getOperateFieldName() const;
    bool operateFieldNameIsSet() const;
    void unsetoperateFieldName();
    void setOperateFieldName(const std::string& value);

    /// <summary>
    /// 操作后的值
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// 操作前的值
    /// </summary>

    std::string getOldValue() const;
    bool oldValueIsSet() const;
    void unsetoldValue();
    void setOldValue(const std::string& value);


protected:
    std::string operateFieldName_;
    bool operateFieldNameIsSet_;
    std::string newValue_;
    bool newValueIsSet_;
    std::string oldValue_;
    bool oldValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IterationHistory_details_H_
