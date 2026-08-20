
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointProxyParam_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointProxyParam_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/codeartspipeline/v2/model/EndpointAuthorizationBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 代理调用外部服务接口参数
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  EndpointProxyParam
    : public ModelBase
{
public:
    EndpointProxyParam();
    virtual ~EndpointProxyParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndpointProxyParam members

    /// <summary>
    /// 
    /// </summary>

    EndpointAuthorizationBody getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const EndpointAuthorizationBody& value);

    /// <summary>
    /// 
    /// </summary>

    Object getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const Object& value);

    /// <summary>
    /// 数据源名称
    /// </summary>

    std::string getDatasourceName() const;
    bool datasourceNameIsSet() const;
    void unsetdatasourceName();
    void setDatasourceName(const std::string& value);

    /// <summary>
    /// 接入点uuid
    /// </summary>

    std::string getEndpointUuid() const;
    bool endpointUuidIsSet() const;
    void unsetendpointUuid();
    void setEndpointUuid(const std::string& value);

    /// <summary>
    /// 模块id
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isIsInner() const;
    bool isInnerIsSet() const;
    void unsetisInner();
    void setIsInner(bool value);

    /// <summary>
    /// 项目uuid
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 区域名
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);


protected:
    EndpointAuthorizationBody authorization_;
    bool authorizationIsSet_;
    Object data_;
    bool dataIsSet_;
    std::string datasourceName_;
    bool datasourceNameIsSet_;
    std::string endpointUuid_;
    bool endpointUuidIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool isInner_;
    bool isInnerIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string regionName_;
    bool regionNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_EndpointProxyParam_H_
