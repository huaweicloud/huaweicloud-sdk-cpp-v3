
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateParamInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateParamInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateParamInfo
    : public ModelBase
{
public:
    UpdateParamInfo();
    virtual ~UpdateParamInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateParamInfo members

    /// <summary>
    /// 节点类型。取值范围： - be - fe
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// 参数名和参数值映射关系。用户可以基于默认参数模板的参数，自定义的参数值。不传入该参数，则保持原参数信息。
    /// </summary>

    std::map<std::string, std::string>& getParameterValues();
    bool parameterValuesIsSet() const;
    void unsetparameterValues();
    void setParameterValues(const std::map<std::string, std::string>& value);


protected:
    std::string nodeType_;
    bool nodeTypeIsSet_;
    std::map<std::string, std::string> parameterValues_;
    bool parameterValuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateParamInfo_H_
