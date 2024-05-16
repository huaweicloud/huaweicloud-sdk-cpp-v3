
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResourceCheck_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResourceCheck_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ResourceCheck_resource.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ResourceCheck
    : public ModelBase
{
public:
    ResourceCheck();
    virtual ~ResourceCheck();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceCheck members

    /// <summary>
    /// 校验类型，仅支持校验创建实例。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceCheck_resource getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const ResourceCheck_resource& value);


protected:
    std::string action_;
    bool actionIsSet_;
    ResourceCheck_resource resource_;
    bool resourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResourceCheck_H_
