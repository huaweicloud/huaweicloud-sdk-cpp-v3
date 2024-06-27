
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstanceLtsConfigs_instance_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstanceLtsConfigs_instance_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// htap实例信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChInstanceLtsConfigs_instance
    : public ModelBase
{
public:
    ChInstanceLtsConfigs_instance();
    virtual ~ChInstanceLtsConfigs_instance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChInstanceLtsConfigs_instance members

    /// <summary>
    /// ClickHouse实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例主备状态。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 引擎类型。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 引擎版本。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 实例状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 企业project id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 企业project名。
    /// </summary>

    std::string getEnterpriseProjectName() const;
    bool enterpriseProjectNameIsSet() const;
    void unsetenterpriseProjectName();
    void setEnterpriseProjectName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string enterpriseProjectName_;
    bool enterpriseProjectNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChInstanceLtsConfigs_instance_H_
