
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BranchSimpleDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BranchSimpleDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  BranchSimpleDto
    : public ModelBase
{
public:
    BranchSimpleDto();
    virtual ~BranchSimpleDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BranchSimpleDto members

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(bool value);

    /// <summary>
    /// 用户是否为默认分支
    /// </summary>

    bool isCanDelete() const;
    bool canDeleteIsSet() const;
    void unsetcanDelete();
    void setCanDelete(bool value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isCanRead() const;
    bool canReadIsSet() const;
    void unsetcanRead();
    void setCanRead(bool value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isCanDownload() const;
    bool canDownloadIsSet() const;
    void unsetcanDownload();
    void setCanDownload(bool value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isCanPush() const;
    bool canPushIsSet() const;
    void unsetcanPush();
    void setCanPush(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool default_;
    bool defaultIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canRead_;
    bool canReadIsSet_;
    bool canDownload_;
    bool canDownloadIsSet_;
    bool canPush_;
    bool canPushIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BranchSimpleDto_H_
