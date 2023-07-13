
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_TransformationInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_TransformationInfo_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 数据加工信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  TransformationInfo
    : public ModelBase
{
public:
    TransformationInfo();
    virtual ~TransformationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TransformationInfo members

    /// <summary>
    /// - 生成加工规则值为contentConditionalFilter - 生成配置规则值为configConditionalFilter
    /// </summary>

    std::string getTransformationType() const;
    bool transformationTypeIsSet() const;
    void unsettransformationType();
    void setTransformationType(const std::string& value);

    /// <summary>
    /// 过滤条件，生成加工规则值为sql条件语句，生成配置规则值为config。长度限制256。
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_TransformationInfo_H_
