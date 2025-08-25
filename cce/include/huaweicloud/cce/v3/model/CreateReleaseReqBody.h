
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateReleaseReqBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateReleaseReqBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ReleaseReqBodyParams.h>
#include <huaweicloud/cce/v3/model/CreateReleaseReqBody_values.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建模板实例的请求体
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateReleaseReqBody
    : public ModelBase
{
public:
    CreateReleaseReqBody();
    virtual ~CreateReleaseReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateReleaseReqBody members

    /// <summary>
    /// 模板ID
    /// </summary>

    std::string getChartId() const;
    bool chartIdIsSet() const;
    void unsetchartId();
    void setChartId(const std::string& value);

    /// <summary>
    /// 模板实例描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板实例所在的命名空间
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 模板实例版本号
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReleaseReqBodyParams getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const ReleaseReqBodyParams& value);

    /// <summary>
    /// 
    /// </summary>

    CreateReleaseReqBody_values getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const CreateReleaseReqBody_values& value);


protected:
    std::string chartId_;
    bool chartIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string version_;
    bool versionIsSet_;
    ReleaseReqBodyParams parameters_;
    bool parametersIsSet_;
    CreateReleaseReqBody_values values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateReleaseReqBody_H_
