
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorSqlResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorSqlResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回放异常SQL数据项
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplayErrorSqlResp
    : public ModelBase
{
public:
    ReplayErrorSqlResp();
    virtual ~ReplayErrorSqlResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplayErrorSqlResp members

    /// <summary>
    /// SQL类型
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// SQL语句
    /// </summary>

    std::string getAbnormalSql() const;
    bool abnormalSqlIsSet() const;
    void unsetabnormalSql();
    void setAbnormalSql(const std::string& value);

    /// <summary>
    /// 异常原因描述
    /// </summary>

    std::string getAbnormalInfo() const;
    bool abnormalInfoIsSet() const;
    void unsetabnormalInfo();
    void setAbnormalInfo(const std::string& value);


protected:
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string abnormalSql_;
    bool abnormalSqlIsSet_;
    std::string abnormalInfo_;
    bool abnormalInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorSqlResp_H_
