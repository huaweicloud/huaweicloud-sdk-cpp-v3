
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowResourceDetailAccessKeyRequest
    : public ModelBase
{
public:
    ShowResourceDetailAccessKeyRequest();
    virtual ~ShowResourceDetailAccessKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowResourceDetailAccessKeyRequest members

    /// <summary>
    /// 集群id，默认空字符串，默认查询所有集群
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 应用id，默认空字符串，默认查询所有的应用
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 密码服务类型，默认空字符串，默认查询所有密码服务类型
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 算法类型，默认空字符串，0：国密，1：国际
    /// </summary>

    std::string getAlgorithmType() const;
    bool algorithmTypeIsSet() const;
    void unsetalgorithmType();
    void setAlgorithmType(const std::string& value);

    /// <summary>
    /// 证书类型，默认空字符串，0：根证书，1：业务证书
    /// </summary>

    std::string getCertificateType() const;
    bool certificateTypeIsSet() const;
    void unsetcertificateType();
    void setCertificateType(const std::string& value);

    /// <summary>
    /// 页面大小，不超过1500
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 页数，默认1
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 查询起始时间戳，毫秒级时间戳，默认为0，默认从三天前查询
    /// </summary>

    int64_t getFrom() const;
    bool fromIsSet() const;
    void unsetfrom();
    void setFrom(int64_t value);

    /// <summary>
    /// 查询终止时间戳，毫秒级时间戳，默认为0，默认查询到当前时间
    /// </summary>

    std::string getTo() const;
    bool toIsSet() const;
    void unsetto();
    void setTo(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string algorithmType_;
    bool algorithmTypeIsSet_;
    std::string certificateType_;
    bool certificateTypeIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    int64_t from_;
    bool fromIsSet_;
    std::string to_;
    bool toIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowResourceDetailAccessKeyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowResourceDetailAccessKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowResourceDetailAccessKeyRequest_H_
