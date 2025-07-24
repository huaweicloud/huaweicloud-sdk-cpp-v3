
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttributeChange_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttributeChange_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对象，包括编号与名称
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AttributeChange
    : public ModelBase
{
public:
    AttributeChange();
    virtual ~AttributeChange();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttributeChange members

    /// <summary>
    /// 变更后的取值
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// 变更前的取值
    /// </summary>

    std::string getOldValue() const;
    bool oldValueIsSet() const;
    void unsetoldValue();
    void setOldValue(const std::string& value);

    /// <summary>
    /// 发生变更的测试计划属性
    /// </summary>

    std::string getAttributeType() const;
    bool attributeTypeIsSet() const;
    void unsetattributeType();
    void setAttributeType(const std::string& value);


protected:
    std::string newValue_;
    bool newValueIsSet_;
    std::string oldValue_;
    bool oldValueIsSet_;
    std::string attributeType_;
    bool attributeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AttributeChange_H_
