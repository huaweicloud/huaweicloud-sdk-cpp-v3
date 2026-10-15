
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySourceConfigResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySourceConfigResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流量回放源数据库配置返回体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplaySourceConfigResp
    : public ModelBase
{
public:
    ReplaySourceConfigResp();
    virtual ~ReplaySourceConfigResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplaySourceConfigResp members

    /// <summary>
    /// 流量回放源数据库引擎类型
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 流量回放源数据库类型
    /// </summary>

    std::string getSourceEndpointType() const;
    bool sourceEndpointTypeIsSet() const;
    void unsetsourceEndpointType();
    void setSourceEndpointType(const std::string& value);

    /// <summary>
    /// 流量回放源数据库来源
    /// </summary>

    std::string getSourceDbOrigin() const;
    bool sourceDbOriginIsSet() const;
    void unsetsourceDbOrigin();
    void setSourceDbOrigin(const std::string& value);

    /// <summary>
    /// 流量回放流量文件来源
    /// </summary>

    std::string getTrafficSource() const;
    bool trafficSourceIsSet() const;
    void unsettrafficSource();
    void setTrafficSource(const std::string& value);

    /// <summary>
    /// 流量回放流量类型
    /// </summary>

    std::vector<std::string>& getSupportTrafficTypes();
    bool supportTrafficTypesIsSet() const;
    void unsetsupportTrafficTypes();
    void setSupportTrafficTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 流量回放agent支持的操作系统
    /// </summary>

    std::vector<std::string>& getSupportOsTypes();
    bool supportOsTypesIsSet() const;
    void unsetsupportOsTypes();
    void setSupportOsTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 流量回放引擎支持的镜像库
    /// </summary>

    std::vector<std::string>& getSupportMirrorDatabaseTypes();
    bool supportMirrorDatabaseTypesIsSet() const;
    void unsetsupportMirrorDatabaseTypes();
    void setSupportMirrorDatabaseTypes(const std::vector<std::string>& value);


protected:
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string sourceEndpointType_;
    bool sourceEndpointTypeIsSet_;
    std::string sourceDbOrigin_;
    bool sourceDbOriginIsSet_;
    std::string trafficSource_;
    bool trafficSourceIsSet_;
    std::vector<std::string> supportTrafficTypes_;
    bool supportTrafficTypesIsSet_;
    std::vector<std::string> supportOsTypes_;
    bool supportOsTypesIsSet_;
    std::vector<std::string> supportMirrorDatabaseTypes_;
    bool supportMirrorDatabaseTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySourceConfigResp_H_
