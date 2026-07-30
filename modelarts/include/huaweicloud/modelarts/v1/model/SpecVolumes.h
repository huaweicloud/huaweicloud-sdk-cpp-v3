
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecVolumes_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecVolumes_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Nfs.h>
#include <huaweicloud/modelarts/v1/model/Obs.h>
#include <huaweicloud/modelarts/v1/model/Pfs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业挂载卷信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SpecVolumes
    : public ModelBase
{
public:
    SpecVolumes();
    virtual ~SpecVolumes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpecVolumes members

    /// <summary>
    /// 
    /// </summary>

    Nfs getNfs() const;
    bool nfsIsSet() const;
    void unsetnfs();
    void setNfs(const Nfs& value);

    /// <summary>
    /// 
    /// </summary>

    Pfs getPfs() const;
    bool pfsIsSet() const;
    void unsetpfs();
    void setPfs(const Pfs& value);

    /// <summary>
    /// 
    /// </summary>

    Obs getObs() const;
    bool obsIsSet() const;
    void unsetobs();
    void setObs(const Obs& value);


protected:
    Nfs nfs_;
    bool nfsIsSet_;
    Pfs pfs_;
    bool pfsIsSet_;
    Obs obs_;
    bool obsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SpecVolumes_H_
