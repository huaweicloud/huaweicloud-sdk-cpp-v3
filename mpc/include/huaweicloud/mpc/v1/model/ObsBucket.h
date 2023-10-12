
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsBucket_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsBucket_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ObsBucket
    : public ModelBase
{
public:
    ObsBucket();
    virtual ~ObsBucket();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObsBucket members

    /// <summary>
    /// 桶名称 
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 桶的创建时间 
    /// </summary>

    std::string getCreationDate() const;
    bool creationDateIsSet() const;
    void unsetcreationDate();
    void setCreationDate(const std::string& value);

    /// <summary>
    /// 授权结果，取值[0,1]，0表示未授权给转码服务，1表示已授权转码服务 
    /// </summary>

    int32_t getIsAuthorized() const;
    bool isAuthorizedIsSet() const;
    void unsetisAuthorized();
    void setIsAuthorized(int32_t value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string creationDate_;
    bool creationDateIsSet_;
    int32_t isAuthorized_;
    bool isAuthorizedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ObsBucket_H_
