
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DemoFieldAccess_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DemoFieldAccess_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DemoFieldAccess
    : public ModelBase
{
public:
    DemoFieldAccess();
    virtual ~DemoFieldAccess();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DemoFieldAccess members

    /// <summary>
    /// 字段名称需和keys中字段保持一致
    /// </summary>

    std::string getFieldName() const;
    bool fieldNameIsSet() const;
    void unsetfieldName();
    void setFieldName(const std::string& value);

    /// <summary>
    /// 字段值
    /// </summary>

    std::string getFieldValue() const;
    bool fieldValueIsSet() const;
    void unsetfieldValue();
    void setFieldValue(const std::string& value);


protected:
    std::string fieldName_;
    bool fieldNameIsSet_;
    std::string fieldValue_;
    bool fieldValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DemoFieldAccess_H_
