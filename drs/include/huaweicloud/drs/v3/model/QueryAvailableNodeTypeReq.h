
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryAvailableNodeTypeReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryAvailableNodeTypeReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询可用的AZ请求
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryAvailableNodeTypeReq
    : public ModelBase
{
public:
    QueryAvailableNodeTypeReq();
    virtual ~QueryAvailableNodeTypeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryAvailableNodeTypeReq members

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 迁移场景 migration实时迁移，sync实时同步，dataGuard实时灾备，subscription实时订阅，replay流量回放
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// 迁移方向，up ：入云 ，灾备场景时对应本云为备，down：出云，灾备场景时对应本云为主，non-dbs：自建
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 规格类型。 micro：极小，small：小，medium：中，high：高，xlarge：超高，2xlarge：极高
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// 是否是双主灾备，不填默认为false
    /// </summary>

    std::string getMultiWrite() const;
    bool multiWriteIsSet() const;
    void unsetmultiWrite();
    void setMultiWrite(const std::string& value);


protected:
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string dbUseType_;
    bool dbUseTypeIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;
    std::string multiWrite_;
    bool multiWriteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryAvailableNodeTypeReq_H_
