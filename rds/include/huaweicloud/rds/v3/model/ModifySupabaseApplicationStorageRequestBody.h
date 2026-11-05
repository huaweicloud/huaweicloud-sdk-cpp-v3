
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationStorageRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationStorageRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Storage修改请求。enabled&#x3D;false时bucket_name/ak/sk必须全空；enabled&#x3D;true时全必填。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifySupabaseApplicationStorageRequestBody
    : public ModelBase
{
public:
    ModifySupabaseApplicationStorageRequestBody();
    virtual ~ModifySupabaseApplicationStorageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifySupabaseApplicationStorageRequestBody members

    /// <summary>
    /// 
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAk() const;
    bool akIsSet() const;
    void unsetak();
    void setAk(const std::string& value);

    /// <summary>
    /// show不返回，部分更新省略即保留。
    /// </summary>

    std::string getSk() const;
    bool skIsSet() const;
    void unsetsk();
    void setSk(const std::string& value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string ak_;
    bool akIsSet_;
    std::string sk_;
    bool skIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifySupabaseApplicationStorageRequestBody_H_
