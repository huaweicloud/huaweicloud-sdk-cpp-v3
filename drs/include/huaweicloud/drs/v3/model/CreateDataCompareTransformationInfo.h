
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataCompareTransformationInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataCompareTransformationInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据加工信息。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CreateDataCompareTransformationInfo
    : public ModelBase
{
public:
    CreateDataCompareTransformationInfo();
    virtual ~CreateDataCompareTransformationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDataCompareTransformationInfo members

    /// <summary>
    /// 加工规则，值为contentConditionalFilter。
    /// </summary>

    std::string getTransformationType() const;
    bool transformationTypeIsSet() const;
    void unsettransformationType();
    void setTransformationType(const std::string& value);

    /// <summary>
    /// 过滤条件，值为sql条件语句，例如id&gt;100，长度限制256。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string transformationType_;
    bool transformationTypeIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataCompareTransformationInfo_H_
