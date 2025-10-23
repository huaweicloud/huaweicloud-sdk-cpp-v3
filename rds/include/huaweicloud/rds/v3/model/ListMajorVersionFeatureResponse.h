
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMajorVersionFeatureResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMajorVersionFeatureResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListMajorVersionFeatureResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMajorVersionFeatureResponse();
    virtual ~ListMajorVersionFeatureResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMajorVersionFeatureResponse members

    /// <summary>
    /// 版本名称。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 支持升级的版本列表。
    /// </summary>

    std::vector<std::string>& getSupportUpgradeVersion();
    bool supportUpgradeVersionIsSet() const;
    void unsetsupportUpgradeVersion();
    void setSupportUpgradeVersion(const std::vector<std::string>& value);

    /// <summary>
    /// 支持备份恢复的版本列表。
    /// </summary>

    std::vector<std::string>& getSupportRecoverVersion();
    bool supportRecoverVersionIsSet() const;
    void unsetsupportRecoverVersion();
    void setSupportRecoverVersion(const std::vector<std::string>& value);

    /// <summary>
    /// 是否支持FileStream特性。
    /// </summary>

    bool isSupportFileStream() const;
    bool supportFileStreamIsSet() const;
    void unsetsupportFileStream();
    void setSupportFileStream(bool value);

    /// <summary>
    /// 是否支持透明数据加密。
    /// </summary>

    bool isSupportTde() const;
    bool supportTdeIsSet() const;
    void unsetsupportTde();
    void setSupportTde(bool value);

    /// <summary>
    /// 是否支持Always On。
    /// </summary>

    bool isSupportAlwaysOn() const;
    bool supportAlwaysOnIsSet() const;
    void unsetsupportAlwaysOn();
    void setSupportAlwaysOn(bool value);

    /// <summary>
    /// 是否支持只读。
    /// </summary>

    bool isSupportReadOnly() const;
    bool supportReadOnlyIsSet() const;
    void unsetsupportReadOnly();
    void setSupportReadOnly(bool value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::vector<std::string> supportUpgradeVersion_;
    bool supportUpgradeVersionIsSet_;
    std::vector<std::string> supportRecoverVersion_;
    bool supportRecoverVersionIsSet_;
    bool supportFileStream_;
    bool supportFileStreamIsSet_;
    bool supportTde_;
    bool supportTdeIsSet_;
    bool supportAlwaysOn_;
    bool supportAlwaysOnIsSet_;
    bool supportReadOnly_;
    bool supportReadOnlyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMajorVersionFeatureResponse_H_
