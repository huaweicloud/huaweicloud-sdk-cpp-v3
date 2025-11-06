
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTrustedIpAddressResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTrustedIpAddressResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateTrustedIpAddressResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateTrustedIpAddressResponse();
    virtual ~UpdateTrustedIpAddressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTrustedIpAddressResponse members

    /// <summary>
    /// **参数解释：** 白名单id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库id。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** ip范围。
    /// </summary>

    std::string getIpRange() const;
    bool ipRangeIsSet() const;
    void unsetipRange();
    void setIpRange(const std::string& value);

    /// <summary>
    /// **参数解释：** 格式类型。 - 0，表示指定ip。 - 1，表示ip范围。 - 2，表示CIDR。
    /// </summary>

    int32_t getIpType() const;
    bool ipTypeIsSet() const;
    void unsetipType();
    void setIpType(int32_t value);

    /// <summary>
    /// **参数解释：** 起始ip。
    /// </summary>

    std::string getIpStart() const;
    bool ipStartIsSet() const;
    void unsetipStart();
    void setIpStart(const std::string& value);

    /// <summary>
    /// **参数解释：** 结束ip。
    /// </summary>

    std::string getIpEnd() const;
    bool ipEndIsSet() const;
    void unsetipEnd();
    void setIpEnd(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否允许访问代码仓库。 - 0，表示禁止访问。 - 1，表示允许访问。
    /// </summary>

    int32_t getViewFlag() const;
    bool viewFlagIsSet() const;
    void unsetviewFlag();
    void setViewFlag(int32_t value);

    /// <summary>
    /// **参数解释：** 是否允许下载代码。 - 0，表示禁止下载。 - 1，表示允许下载。
    /// </summary>

    int32_t getDownloadFlag() const;
    bool downloadFlagIsSet() const;
    void unsetdownloadFlag();
    void setDownloadFlag(int32_t value);

    /// <summary>
    /// **参数解释：** 是否允许提交代码。 - 0，表示禁止提交。 - 1，表示允许提交。
    /// </summary>

    int32_t getUploadFlag() const;
    bool uploadFlagIsSet() const;
    void unsetuploadFlag();
    void setUploadFlag(int32_t value);

    /// <summary>
    /// **参数解释：** 备注。 **取值范围：** 字符串长度不少于0，不超过200。
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **参数解释：** MMM dd, yyyy hh:mm:ss a            
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **参数解释：** MMM dd, yyyy hh:mm:ss a
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序。 - 0，表示默认规则。 - 1，表示自定义规则。
    /// </summary>

    int32_t getOrderFlag() const;
    bool orderFlagIsSet() const;
    void unsetorderFlag();
    void setOrderFlag(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string ipRange_;
    bool ipRangeIsSet_;
    int32_t ipType_;
    bool ipTypeIsSet_;
    std::string ipStart_;
    bool ipStartIsSet_;
    std::string ipEnd_;
    bool ipEndIsSet_;
    int32_t viewFlag_;
    bool viewFlagIsSet_;
    int32_t downloadFlag_;
    bool downloadFlagIsSet_;
    int32_t uploadFlag_;
    bool uploadFlagIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    int32_t orderFlag_;
    bool orderFlagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateTrustedIpAddressResponse_H_
