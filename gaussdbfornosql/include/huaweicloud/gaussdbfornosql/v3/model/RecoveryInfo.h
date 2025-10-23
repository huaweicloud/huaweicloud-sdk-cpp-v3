
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecoveryInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecoveryInfo_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数解释： &#39;备份文件所在OBS信息。&#39; 约束限制： 不涉及。 取值范围： 不涉及。 默认取值： 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  RecoveryInfo
    : public ModelBase
{
public:
    RecoveryInfo();
    virtual ~RecoveryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecoveryInfo members

    /// <summary>
    /// 参数解释： &#39;备份文件所在OBS bucket。&#39; 约束限制： 不涉及。 取值范围： 不涉及。 默认取值： 不涉及。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 参数解释： &#39;备份文件名。&#39; 约束限制： 不涉及。 取值范围： 不涉及。 默认取值： 不涉及。
    /// </summary>

    std::vector<std::string>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<std::string>& value);


protected:
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::vector<std::string> files_;
    bool filesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_RecoveryInfo_H_
