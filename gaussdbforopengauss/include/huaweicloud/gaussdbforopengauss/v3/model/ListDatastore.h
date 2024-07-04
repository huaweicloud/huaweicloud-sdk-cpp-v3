
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatastore_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatastore_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListDatastore
    : public ModelBase
{
public:
    ListDatastore();
    virtual ~ListDatastore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatastore members

    /// <summary>
    /// 数据库引擎。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库大版本。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 数据库小版本。
    /// </summary>

    std::string getCompleteVersion() const;
    bool completeVersionIsSet() const;
    void unsetcompleteVersion();
    void setCompleteVersion(const std::string& value);

    /// <summary>
    /// 数据库已升级的热补丁版本，当数据库热补丁升级成功后，该值不为空。
    /// </summary>

    std::string getHotfixVersions() const;
    bool hotfixVersionsIsSet() const;
    void unsethotfixVersions();
    void setHotfixVersions(const std::string& value);

    /// <summary>
    /// 数据库正在升级的目标版本。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 热补丁升级完成时间列表。  热补丁升级完成时间，格式为“yyyy-mm-dd hh:mm:ss timezone”。  其中timezone是指时区。 
    /// </summary>

    std::vector<std::string>& getHotfixFinishedTimes();
    bool hotfixFinishedTimesIsSet() const;
    void unsethotfixFinishedTimes();
    void setHotfixFinishedTimes(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string completeVersion_;
    bool completeVersionIsSet_;
    std::string hotfixVersions_;
    bool hotfixVersionsIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::vector<std::string> hotfixFinishedTimes_;
    bool hotfixFinishedTimesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatastore_H_
