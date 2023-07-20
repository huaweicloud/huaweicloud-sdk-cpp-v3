
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadErrorlogRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadErrorlogRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DownloadErrorlogRequestBody
    : public ModelBase
{
public:
    DownloadErrorlogRequestBody();
    virtual ~DownloadErrorlogRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DownloadErrorlogRequestBody members

    /// <summary>
    /// - 需要下载的文件的文件名列表。
    /// </summary>

    std::vector<std::string>& getFileNameList();
    bool fileNameListIsSet() const;
    void unsetfileNameList();
    void setFileNameList(const std::vector<std::string>& value);

    /// <summary>
    /// 节点ID列表，取空值，表示查询实例下所有允许查询的节点。使用请参考《DDS API参考》的“查询实例列表和详情”响应消息表“nodes 数据结构说明”的“id”。允许查询的节点如下： - 集群下面的mongos、shard、config节点 - 副本集、单节点下面的所有节点
    /// </summary>

    std::vector<std::string>& getNodeIdList();
    bool nodeIdListIsSet() const;
    void unsetnodeIdList();
    void setNodeIdList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> fileNameList_;
    bool fileNameListIsSet_;
    std::vector<std::string> nodeIdList_;
    bool nodeIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DownloadErrorlogRequestBody_H_
