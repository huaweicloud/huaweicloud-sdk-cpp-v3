
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_item_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_item_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 诊断项。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryDiagnosisResult_item
    : public ModelBase
{
public:
    QueryDiagnosisResult_item();
    virtual ~QueryDiagnosisResult_item();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDiagnosisResult_item members

    /// <summary>
    /// 诊断项类别。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 诊断项名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 诊断项权重。
    /// </summary>

    double getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(double value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string name_;
    bool nameIsSet_;
    double weight_;
    bool weightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_item_H_
