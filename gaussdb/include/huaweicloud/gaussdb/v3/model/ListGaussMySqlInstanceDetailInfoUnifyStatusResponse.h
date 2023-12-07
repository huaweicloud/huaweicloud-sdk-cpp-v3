
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlInstanceDetailInfoUnifyStatusResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlInstanceDetailInfoUnifyStatusResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlInstanceInfoDetailUnifyStatus.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListGaussMySqlInstanceDetailInfoUnifyStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGaussMySqlInstanceDetailInfoUnifyStatusResponse();
    virtual ~ListGaussMySqlInstanceDetailInfoUnifyStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGaussMySqlInstanceDetailInfoUnifyStatusResponse members

    /// <summary>
    /// 实例详情。
    /// </summary>

    std::vector<MysqlInstanceInfoDetailUnifyStatus>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<MysqlInstanceInfoDetailUnifyStatus>& value);


protected:
    std::vector<MysqlInstanceInfoDetailUnifyStatus> instances_;
    bool instancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMySqlInstanceDetailInfoUnifyStatusResponse_H_
