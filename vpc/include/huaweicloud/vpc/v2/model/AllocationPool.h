
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_AllocationPool_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_AllocationPool_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  AllocationPool
    : public ModelBase
{
public:
    AllocationPool();
    virtual ~AllocationPool();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AllocationPool members

    /// <summary>
    /// 网络池结束IP
    /// </summary>

    std::string getEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(const std::string& value);

    /// <summary>
    /// 网络池起始IP
    /// </summary>

    std::string getStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(const std::string& value);


protected:
    std::string end_;
    bool endIsSet_;
    std::string start_;
    bool startIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_AllocationPool_H_
