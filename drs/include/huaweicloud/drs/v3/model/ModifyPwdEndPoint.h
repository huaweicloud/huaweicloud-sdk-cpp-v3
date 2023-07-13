
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyPwdEndPoint_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyPwdEndPoint_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v3/model/KerberosVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量修改数据库密码请求列表
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ModifyPwdEndPoint
    : public ModelBase
{
public:
    ModifyPwdEndPoint();
    virtual ~ModifyPwdEndPoint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyPwdEndPoint members

    /// <summary>
    /// 数据库密码
    /// </summary>

    std::string getDbPassword() const;
    bool dbPasswordIsSet() const;
    void unsetdbPassword();
    void setDbPassword(const std::string& value);

    /// <summary>
    /// 类型，so：源库；ta：目标库。
    /// </summary>

    std::string getEndPointType() const;
    bool endPointTypeIsSet() const;
    void unsetendPointType();
    void setEndPointType(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    KerberosVO getKerberos() const;
    bool kerberosIsSet() const;
    void unsetkerberos();
    void setKerberos(const KerberosVO& value);


protected:
    std::string dbPassword_;
    bool dbPasswordIsSet_;
    std::string endPointType_;
    bool endPointTypeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    KerberosVO kerberos_;
    bool kerberosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyPwdEndPoint_H_
