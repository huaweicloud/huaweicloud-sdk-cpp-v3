
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DiagnosisItemResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DiagnosisItemResult_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DiagnosisItemResult
    : public ModelBase
{
public:
    DiagnosisItemResult();
    virtual ~DiagnosisItemResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiagnosisItemResult members

    /// <summary>
    /// 诊断项
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DiagnosisItemResult_H_
