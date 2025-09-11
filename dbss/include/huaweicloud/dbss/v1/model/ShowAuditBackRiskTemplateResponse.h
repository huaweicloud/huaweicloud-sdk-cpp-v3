
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditBackRiskTemplateResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditBackRiskTemplateResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditBackRiskTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditBackRiskTemplateResponse();
    virtual ~ShowAuditBackRiskTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditBackRiskTemplateResponse members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getDbIp() const;
    bool dbIpIsSet() const;
    void unsetdbIp();
    void setDbIp(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据库端口
    /// </summary>

    int32_t getDbPort() const;
    bool dbPortIsSet() const;
    void unsetdbPort();
    void setDbPort(int32_t value);

    /// <summary>
    /// 配置ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态 - 0: 关闭 - 1：开启
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string dbId_;
    bool dbIdIsSet_;
    std::string dbIp_;
    bool dbIpIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    int32_t dbPort_;
    bool dbPortIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditBackRiskTemplateResponse_H_
