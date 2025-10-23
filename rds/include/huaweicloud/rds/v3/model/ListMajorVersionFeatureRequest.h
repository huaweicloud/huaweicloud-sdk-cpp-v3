
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMajorVersionFeatureRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMajorVersionFeatureRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListMajorVersionFeatureRequest
    : public ModelBase
{
public:
    ListMajorVersionFeatureRequest();
    virtual ~ListMajorVersionFeatureRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMajorVersionFeatureRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 版本，例如：2022_SE, 2022_EE, 2022_WEB。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 是否是单机版。
    /// </summary>

    bool isSingle() const;
    bool singleIsSet() const;
    void unsetsingle();
    void setSingle(bool value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string version_;
    bool versionIsSet_;
    bool single_;
    bool singleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMajorVersionFeatureRequest& dereference_from_shared_ptr(std::shared_ptr<ListMajorVersionFeatureRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListMajorVersionFeatureRequest_H_
