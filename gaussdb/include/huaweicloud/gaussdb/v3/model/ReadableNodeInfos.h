
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ReadableNodeInfos_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ReadableNodeInfos_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可读节点信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ReadableNodeInfos
    : public ModelBase
{
public:
    ReadableNodeInfos();
    virtual ~ReadableNodeInfos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReadableNodeInfos members

    /// <summary>
    /// 可读节点IP。
    /// </summary>

    std::string getDataIp() const;
    bool dataIpIsSet() const;
    void unsetdataIp();
    void setDataIp(const std::string& value);

    /// <summary>
    /// 可读节点ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 可读节点名称。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);


protected:
    std::string dataIp_;
    bool dataIpIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ReadableNodeInfos_H_
