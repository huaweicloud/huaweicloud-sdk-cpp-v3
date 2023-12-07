
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlInstanceInfoUnifyStatusResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlInstanceInfoUnifyStatusResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlInstanceInfoDetailUnifyStatus.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlInstanceInfoUnifyStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGaussMySqlInstanceInfoUnifyStatusResponse();
    virtual ~ShowGaussMySqlInstanceInfoUnifyStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGaussMySqlInstanceInfoUnifyStatusResponse members

    /// <summary>
    /// 
    /// </summary>

    MysqlInstanceInfoDetailUnifyStatus getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const MysqlInstanceInfoDetailUnifyStatus& value);


protected:
    MysqlInstanceInfoDetailUnifyStatus instance_;
    bool instanceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlInstanceInfoUnifyStatusResponse_H_
