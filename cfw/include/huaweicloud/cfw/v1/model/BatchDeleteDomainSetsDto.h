
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteDomainSetsDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteDomainSetsDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  BatchDeleteDomainSetsDto
    : public ModelBase
{
public:
    BatchDeleteDomainSetsDto();
    virtual ~BatchDeleteDomainSetsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteDomainSetsDto members

    /// <summary>
    /// 防护对象id
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 域名组id
    /// </summary>

    std::vector<std::string>& getSetIds();
    bool setIdsIsSet() const;
    void unsetsetIds();
    void setSetIds(const std::vector<std::string>& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::vector<std::string> setIds_;
    bool setIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchDeleteDomainSetsDto_H_
