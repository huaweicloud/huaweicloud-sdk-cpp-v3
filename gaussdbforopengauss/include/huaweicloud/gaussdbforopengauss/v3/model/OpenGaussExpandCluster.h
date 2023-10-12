
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussExpandCluster_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussExpandCluster_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussCoordinators.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussShard.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// CN横向扩容/DN分片扩容时必填
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  OpenGaussExpandCluster
    : public ModelBase
{
public:
    OpenGaussExpandCluster();
    virtual ~OpenGaussExpandCluster();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenGaussExpandCluster members

    /// <summary>
    /// CN横向扩容时必填
    /// </summary>

    std::vector<OpenGaussCoordinators>& getCoordinators();
    bool coordinatorsIsSet() const;
    void unsetcoordinators();
    void setCoordinators(const std::vector<OpenGaussCoordinators>& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussShard getShard() const;
    bool shardIsSet() const;
    void unsetshard();
    void setShard(const OpenGaussShard& value);


protected:
    std::vector<OpenGaussCoordinators> coordinators_;
    bool coordinatorsIsSet_;
    OpenGaussShard shard_;
    bool shardIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussExpandCluster_H_
