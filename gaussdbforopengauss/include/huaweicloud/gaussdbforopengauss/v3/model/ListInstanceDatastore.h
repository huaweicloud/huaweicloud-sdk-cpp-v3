
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceDatastore_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceDatastore_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/HotfixVersionInfo.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListInstanceDatastore
    : public ModelBase
{
public:
    ListInstanceDatastore();
    virtual ~ListInstanceDatastore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceDatastore members

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
    /// 数据库正在升级的目标版本。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 数据库内核版本
    /// </summary>

    std::string getCompleteKernelVersion() const;
    bool completeKernelVersionIsSet() const;
    void unsetcompleteKernelVersion();
    void setCompleteKernelVersion(const std::string& value);

    /// <summary>
    /// 热补丁信息列表
    /// </summary>

    std::vector<HotfixVersionInfo>& getHotfixVersionInfos();
    bool hotfixVersionInfosIsSet() const;
    void unsethotfixVersionInfos();
    void setHotfixVersionInfos(const std::vector<HotfixVersionInfo>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string completeVersion_;
    bool completeVersionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::string completeKernelVersion_;
    bool completeKernelVersionIsSet_;
    std::vector<HotfixVersionInfo> hotfixVersionInfos_;
    bool hotfixVersionInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListInstanceDatastore_H_
