
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlHbaHistory_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlHbaHistory_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/rds/v3/model/PostgresqlHbaConf.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgresqlHbaHistory
    : public ModelBase
{
public:
    PostgresqlHbaHistory();
    virtual ~PostgresqlHbaHistory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgresqlHbaHistory members

    /// <summary>
    /// 修改结果，    success：已生效     failed：未生效     setting：设置中\&quot;,
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    utility::datetime getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const utility::datetime& value);

    /// <summary>
    /// 修改失败原因
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// 修改之前的值
    /// </summary>

    std::vector<PostgresqlHbaConf>& getBeforeConfs();
    bool beforeConfsIsSet() const;
    void unsetbeforeConfs();
    void setBeforeConfs(const std::vector<PostgresqlHbaConf>& value);

    /// <summary>
    /// 修改之后的值
    /// </summary>

    std::vector<PostgresqlHbaConf>& getAfterConfs();
    bool afterConfsIsSet() const;
    void unsetafterConfs();
    void setAfterConfs(const std::vector<PostgresqlHbaConf>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    utility::datetime time_;
    bool timeIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    std::vector<PostgresqlHbaConf> beforeConfs_;
    bool beforeConfsIsSet_;
    std::vector<PostgresqlHbaConf> afterConfs_;
    bool afterConfsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlHbaHistory_H_
